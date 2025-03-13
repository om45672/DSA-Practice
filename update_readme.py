import os
import re

directory = "DSA_Practice"

# Extract files that match the day-wise pattern
files = sorted(os.listdir(directory))

# Function to extract the day number from the filename
def extract_day_number(filename):
    match = re.search(r'day(\d+)', filename, re.IGNORECASE)
    return int(match.group(1)) if match else float('inf')  # Assign inf if no day found (push those to the end)

# Sort files by day number
files.sort(key=extract_day_number)

# Write to README.md
with open("README.md", "w") as readme:
    readme.write("# DSA Practice Problems\n\n")
    for file in files:
        readme.write(f"- {file}\n")

print("README updated successfully!")


