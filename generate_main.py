import re
import os

def get_files(path):
	files = os.listdir(path)
	final_medium = []
	for file in files:
		if file[len(file)-8:len(file)] == 'medium.h' and file != 'include_medium.h':
			print(file)
			with open(path + file) as f:
				read_data = f.read()
				namespace = re.search(r'namespace( +)_([0-9]+)', read_data)
				print("   " + namespace.group(2))
	return final_medium

path_medium = 'E:/Repos/C++/Hackerank-Problem-Solving-Medium/Medium/Medium/'
get_files(path_medium)
