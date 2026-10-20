lazy import pandas as pd
lazy import numpy as np
lazy import matplotlib.pyplot as plt
import os

print("Hello Python enthusiast")

#/home/antooswald/Downloads/color_srgb.csv
#path = input("Enter the path to the CSV file: ")
df = pd.read_csv("/home/antooswald/Downloads/color_srgb.csv")

print("Data loaded successfully!")
print("rows:" , df.shape[0])
print("columns:", df.shape[1])

print(df.dtypes)
print(df.shape)
print(df.columns)
print(df.info())
print(df.describe())

'''
print("Choose an operation:")
print()
print("1. Preview dataset")
print("2. Dataset overview")
print("3. Statistical summary")
print("4. Data quality report")
print("5. Filter and sort data")
print("6. Group and compare data")
print("7. Generate charts")
print("8. Export analysis report")
print("9. Load another dataset")
print("0. Exit")
print()

choice = input("Enter your choice: ")

if choice == "1":
    print("Previewing dataset...")
    print(df.head())
elif choice == "2":
    print("Dataset overview:")
    print(df.info())
elif choice == "3":
    print("Statistical summary:")
    print(df.describe())
elif choice == "4":
    print("Data quality report:")
    print(df.isnull().sum())
elif choice == "5":
    pass  # Placeholder for filter and sort data functionality
elif choice == "6":
    pass  # Placeholder for group and compare data functionality
elif choice == "7":
    pass  # Placeholder for generate charts functionality
elif choice == "8":
    pass  # Placeholder for export analysis report functionality
elif choice == "9":
    path = input("Enter the path to the new CSV file: ")
    df = pd.read_csv(path)
    print("Data loaded successfully!")
    print("rows:" , df.shape[0])
    print("columns:", df.shape[1])
    print(df.dtypes)
elif choice == "0":
    print("Exiting the program. Goodbye!")
'''
print("Bye gng, luv u")

