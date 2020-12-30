inp_string = input("Enter an odd length string: ")

middlechr = inp_string[int(len(inp_string)/2)]

print("Middle character:",middlechr,"\nFirst half:",inp_string[:int(len(inp_string)/2)],"\nSecond half:", inp_string[int(len(inp_string)/2)+1:])
