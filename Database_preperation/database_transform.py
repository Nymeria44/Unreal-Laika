import pandas as pd
import numpy as np
import re

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
comp_base = if not empty, indicates a multiple star system, refers to database ID of the primary star --> convert ID to HD

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
stars_df[stars_df["Spectral Type"].isnull() & stars_df["lum"] < 0.2 ] = "Z0" # Way to code for brown dwarf

stars_df = stars_df[["hd", "hr", "gl", "bf", "proper", "lum", "spect", "comp", "comp_base", "x", "y", "z"]]

print(list(stars_df["spect"]))

def findStars(spect):
    # Find star using regex on spectral code
    pattern  = ""
    pass

def findGalaxies(spect):
    # Find galaxies using regex on spectral code
    pattern = ""
    pass

def findNova(spect)
    # Find Nova using regex on spectral code
    pattern = ""
    pass

stars_df["star_flag"] = np.where(stars_df["spect"].apply(findStars))