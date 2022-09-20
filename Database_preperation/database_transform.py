import pandas as pd
import numpy as np
import re
import math

"""
Source: https://www.astronexus.com/hyg
* notes a field in the final output

id = database id
hd = HD id number*
gd = Gileste name*
bf = Bayer Flamstead name*
ProperName = colloquial/english name*

lum = brightness of a star in comparison to the sun (at the point of the star)*

dist = distance from earth/sun in parsecs (x=0, y=0, z=0) (ingore 10000000)
spect = spectral type of the star (and binary info)*
comp = Index of the star in the system (1, 2, 3 for a three star system)
comp_primary = if not empty, indicates a multiple star system, refers to database ID of the primary star --> convert ID to HD

X = x position of the star (sun at x=0)*
Y = y position of the star (sun at y=0)*
Z = z position of the star (sun at z=0)*

^
The Cartesian coordinates of the star, 
in a system based on the equatorial coordinates as seen from Earth. 
+X is in the direction of the vernal equinox (at epoch 2000), 
+Z towards the north celestial pole, 
and +Y in the direction of R.A. 6 hours, declination 0 degrees.
"""

# filename = "Database_preperation/hygfull.csv"
filename = "Database_preperation/hygdata_v3.csv"

stars_df = pd.read_csv(filename)
stars_df = stars_df[stars_df["hd"].notnull()]
#stars_df["spect"][stars_df["spect"].isnull() & stars_df["lum"] < 0.2 ] = "Z0" # Way to code for brown dwarf

stars_df = stars_df[["hd", "hr", "gl", "bf", "proper", "lum", "spect", "comp", "comp_primary", "x", "y", "z"]]
stars_df["approx_mass"] = stars_df["lum"].pow(3.5)
#print(stars_df["lum"].head(5))
#print(stars_df['approx_mass'].head(5))

print((stars_df["spect"].unique()))

pattern1 = "([OBAFGKM][0-9]).?([IV]*)"
#pattern_re = re.compile(pattern1)

#stars_df["star_flag"] = stars_df["spect"].apply(lambda x: findStars(x))
stars_df["star_spectral_type"] = stars_df["spect"].str.extract("([OBAFGKM][0-9]).?")
stars_df["star_HR_type"] =  stars_df["spect"].str.extract("[OBAFGKM][0-9].?([IV]*)")
stars_df["mass_approx"] = stars_df["lum"].pow(3.5)

print(stars_df)