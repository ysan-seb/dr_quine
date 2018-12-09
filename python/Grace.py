def nothing_1(): pass
def nothing_2(): pass
def quine():
	# comment
	try:
		with open("Grace_kid.py", "w") as file:
			file_content = "def nothing_1(): pass{2}def nothing_2(): pass{2}def quine():{2}{1}# comment{2}{1}try:{2}{1}{1}with open({3}Grace_kid.py{3}, {3}w{3}) as file:{2}{1}{1}{1}file_content = {3}{0}{3}{2}{1}{1}{1}file.write(file_content.format(file_content,chr(9),chr(10),chr(34))){2}{1}except Exception as e:{2}{1}{1}print(e){2}if __name__ == '__main__':{2}{1}quine()"
			file.write(file_content.format(file_content,chr(9),chr(10),chr(34)))
	except Exception as e:
		print(e)
if __name__ == '__main__':
	quine()