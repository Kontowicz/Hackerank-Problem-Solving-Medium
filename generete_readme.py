import os 
import re

def get_files(path):
	files = os.listdir(path)
	final_medium = []
	for file in files:
		print(file)
		if file[len(file)-8:len(file)] == 'medium.h' and file != 'include_medium.h':
			final_medium.append(file)
	print(len(final_medium))
	return final_medium
	
def add_top(path):
	file = open(path + 'README.md', 'w')
	file.write('<H1>Problem Solving<H1>\n\n')
	file.close()
	

def generate_medium(medium, path):
	print(len(medium))
	if len(medium) > 0:
		tmp = []
		for e in medium:
			tmp.append( [e[0].upper() + e[1:-6].replace('_',' '), ('https://www.hackerrank.com/challenges/%s/problem' %(e[:-7].replace('_','-'))), e, ])
		file = open(path+'README.md', 'a')
		file.write('\n\n<H3>Medium<H3>\n\n')
		file.write('|Number| Hackerrank exercise | MySolution |\n')
		file.write('|------|---------------------|------------|\n')
		counter = 1
		for t in tmp:
			file.write('|%d|[%s](%s)|[MySolution](../master/Medium/Medium/%s)|\n' %(counter, t[0], t[1], t[2]))
			counter = counter + 1
		file.close()

		
add_top( 'E:/Repos/C++/Hackerank-Problem-Solving-Medium/' )
generate_medium(get_files('E:/Repos/C++/Hackerank-Problem-Solving-Medium/Medium/Medium/'), 'E:/Repos/C++/Hackerank-Problem-Solving-Medium/')

