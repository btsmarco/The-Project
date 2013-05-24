#This is a script that Converts Postfix to Infix expressions
#

post = "ab+cd-*e"
post2 = "12*34*+56/78/-+"
post3 = "abc*+de*f+g*+"
stack = []

for e in post3:
    if(e > "/"):
        stack.append(e)
    else:
        r = stack.pop() #right to come out
        l = stack.pop() #left...
        exp = l + e + r  #infix = left, root,right
        stack.append(exp)
infix = stack.pop()
if infix == "a+b*c+d*e+f*g":
    print "Thank God"
print infix
if(stack):
    print "Error: an extra expression in the stack:%s " %stack.pop()
