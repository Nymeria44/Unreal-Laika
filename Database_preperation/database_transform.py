import pandas as pd
import numpy as np
import matplotlib
import re
import math

"""
Source: https://www.astronexus.com/hyg

hd = HD id number
ProperName = colloquial/english name

lum = brightness of a star in comparison to the sun (at the point of the star
temp = surface temperature of a star (kelvin)

spect = spectral type of the star (and binary info)*
comp = Index of the star in the system (1, 2, 3 for a three star system)
comp_primary = if not empty, indicates a multiple star system, refers to database ID of the primary star --> convert ID to HD

X = x position of the star (sun at x=0)
Y = y position of the star (sun at y=0)
Z = z position of the star (sun at z=0)

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
#print(stars_df["lum"].head(5))
#print(stars_df['approx_mass'].head(5))

#print(list(stars_df["spect"].unique()))

pattern1 = "([OBAFGKM][0-9]).?([IV]*)"
#pattern_re = re.compile(pattern1)

#stars_df["star_flag"] = stars_df["spect"].apply(lambda x: findStars(x))
stars_df["star_spectral_type"] = stars_df["spect"].str.extract("([OBAFGKM][0-9]).?")
stars_df["star_HR_type"] =  stars_df["spect"].str.extract("[OBAFGKM][0-9].?([IV]*)")
stars_df["spectral_combo"] = stars_df["star_spectral_type"] + " " + stars_df["star_HR_type"]
stars_df["mass_approx"] = stars_df["lum"].pow(3.5)
stars_df["temperature_approx"] = None

spectral_info_filename = "Database_preperation/Spectral Information"

spectral_info_df = pd.read_csv(spectral_info_filename, delim_whitespace=True)
spectral_info_df = spectral_info_df.set_index("Class")

classes  = ["O", "B", "A", "F", "G", "K", "M"]

df = pd.DataFrame(columns=["temperature_approx"])

for letter in classes:
    temp_max_class = spectral_info_df.loc[letter]["Temperature_max"]
    temp_mix_class = spectral_info_df.loc[letter]["Temperature_min"]
    diff = temp_max_class - temp_mix_class
    temp_max_subclass = temp_max_class

    for i in range(10):
        temp_max_subclass -= diff
        index_temp = letter + str(i)

        df2 = pd.DataFrame({
            "temperature_approx": [temp_max_subclass],
        },
        index = [index_temp])

        df = pd.concat([df, df2])

for index, row in df.iterrows():
    #print(index)
    stars_df["temperature_approx"] = np.where(stars_df["spectral_combo"] == index, row["temperature_approx"], stars_df["temperature_approx"])

stars_df.to_csv("Star_Database.csv", index=False)

