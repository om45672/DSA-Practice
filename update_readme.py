import os

directory = "DSA_Practice"
files = sorted(os.listdir(directory))

with open("README.md", "w") as readme:
    readme.write("# DSA Practice Problems\n\n")
    for file in files:
        readme.write(f"- {file}\n")

print("README updated successfully!")
