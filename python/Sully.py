import os
def main():
	i = 5
	if i <= 0:
		return
	if __file__ != 'Sully.py':
		i = i - 1
	filename = 'Sully_%d.py'%(i)
	try:
		with open(filename, 'w') as file:
			file_content = "import os{2}def main():{2}{1}i = {4}{2}{1}if i <= 0:{2}{1}{1}return{2}{1}if __file__ != 'Sully.py':{2}{1}{1}i = i - 1{2}{1}filename = 'Sully_{5}.py'%(i){2}{1}try:{2}{1}{1}with open(filename, 'w') as file:{2}{1}{1}{1}file_content = {3}{0}{3}{2}{1}{1}{1}file.write(file_content.format(file_content,chr(9),chr(10),chr(34),i,{3}{5}{3})){2}{1}except:{2}{1}{1}return{2}{1}os.system('python ' + filename){2}if __name__ == '__main__':{2}{1}main()"
			file.write(file_content.format(file_content,chr(9),chr(10),chr(34),i,"%d"))
	except:
		return
	os.system('python ' + filename)
if __name__ == '__main__':
	main()