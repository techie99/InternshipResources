import pandas as pd

data = pd.read_csv("Weather Data(1).csv")
print(data)

#1.Find all the unique "wind speed" values in the data
unique_wind_speed = data["Wind Speed"].unique()
print(len(unique_wind_speed))
