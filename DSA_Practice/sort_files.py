import os

files = os.listdir(".")
cpp_files = sorted([f for f in files if f.endswith(".cpp")])

for file in cpp_files:
    print(file)
