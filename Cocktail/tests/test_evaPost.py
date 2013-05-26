#This is a script to test the function evaluatePost which evaluates Postfix expressions

import sys
sys.path.insert(0,'..')

from evaPost import evaluatePost

post = "123*+45*6+7*+"

def test():
    result = evaluatePost(post)
    assert result == "189",result

test()
