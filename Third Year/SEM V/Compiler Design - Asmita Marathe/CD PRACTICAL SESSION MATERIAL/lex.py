import re

file = open("read.py")

operators = {'=' : 'Assignment op','+' : 'Addition op','-' : 'Subtraction op','/' : 'Division op','*' : 'Multiplication op','<' : 'Lessthan op','>' : 'Greaterthan op' }
operators_key = operators.keys()

data_type = {'int' : 'integer type', 'float': 'Floating point' , 'char' : 'Character type', 'long' : 'long int' }
data_type_key = data_type.keys()

punctuation_symbol = { ':' : 'colon', ';' : 'semi-colon', '.' : 'dot' , ',' : 'comma' }
punctuation_symbol_key = punctuation_symbol.keys()

identifier = { 'a' : 'id', 'b' : 'id', 'c' : 'id' , 'd' : 'id' }
identifier_key = identifier.keys()

dataFlag = False

a=file.read()

count=0
program = a.split("\n")
for line in program:
    count = count + 1
    print("line#" , count, "\n" , line)

    tokens=line.split(' ')
    print("Tokens are " , tokens)
    print("Line#", count, "properties \n")
    for token in tokens:
        if token in operators_key:
            print("operator is ", operators[token])
        if token in data_type_key:
            print("datatype is", data_type[token])
        if token in punctuation_symbol_key:
            print (token, "Punctuation symbol is" , punctuation_symbol[token])
        if token in identifier_key:
            print (token, "Identifier is" , identifier[token])

           
    dataFlag=False
    print("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _  _") 
