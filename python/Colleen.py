import sys
def quine(string):
	print(string.format(string,chr(9),chr(10),chr(34)))
# comment
def main():
	# comment
	quine("import sys{2}def quine(string):{2}{1}print(string.format(string,chr(9),chr(10),chr(34))){2}# comment{2}def main():{2}{1}# comment{2}{1}quine({3}{0}{3}){2}if __name__ == '__main__':{2}{1}main()")
if __name__ == '__main__':
	main()
