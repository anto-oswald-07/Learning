lazy import pandas as pd
lazy import numpy as np
lazy import matplotlib.pyplot as plt
import os

# Functions
def load_file(path):
    try:
        df = pd.read_csv(path)
        print("Data loaded successfully!")
        return df
    except FileNotFoundError:
        print(f"Error: The file at {path} was not found.")
        return None

def preview_dataset(df):
    if df is not None:
        print("========== DATASET PREVIEW ==========")
        print(df.head())
        print("=====================================")

    else:
        print("No data available to generate a preview.")
        return None

def dataset_overview(df):
    if df is not None:
        print("========== DATASET OVERVIEW==========")
        print(df.info())
        print("=====================================")

    else:
        print("No data available to generate a dataset overview.")
        return None

def statistical_summary(df):
    if df is not None:
        print("============== STATISTICAL SUMMARY ==============")
        print(df.describe())
        print("=================================================")
        return None

    else:
        print("No data available to generate a statistical summary.")
        return None

def quality_report(df):
    if df is not None:
        print("========== DATA QUALITY REPORT ==========")
        print(f"Total rows: {df.shape[0]}")
        print(f"Total columns: {df.shape[1]}")
        print(f"Missing values:\n{df.isna().sum()}")
        print(f"Data types:\n{df.dtypes}")
        print(f"Duplicate rows: {df.duplicated().sum()}")
        print("=========================================")
        return None

    else:
        print("No data available to generate a quality report.")
        return None

def load_another_dataset():
    path = input("Enter the path to the CSV file: ")
    df = load_file(path)
    return df


# Main Program
print("Hello Python enthusiast")

#/home/antooswald/Downloads/sample.csv
#path = input("Enter the path to the CSV file: ")
path = "/home/antooswald/Downloads/sample.csv"

df = load_file(path)

df = load_another_dataset()

statistical_summary(df)





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
    preview_dataset(df)
elif choice == "2":
    dataset_overview(df)
elif choice == "3":
    statistical_summary(df)
elif choice == "4":
    quality_report(df)
elif choice == "5":
    pass  # Placeholder for filter and sort data functionality
elif choice == "6":
    pass  # Placeholder for group and compare data functionality
elif choice == "7":
    pass  # Placeholder for generate charts functionality
elif choice == "8":
    pass  # Placeholder for export analysis report functionality
elif choice == "9":
    df = load_another_dataset()
elif choice == "0":
    print("Exiting the program. Goodbye!")
'''
print("Bye gng, luv u")

