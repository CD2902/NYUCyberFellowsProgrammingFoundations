inp_input = input("Enter a character: ")


if 32 < ord(inp_input) < 48 or 57 < ord(inp_input) < 65 or 91 < ord(inp_input) < 97 or 122 < ord(inp_input) < 127:
  print(inp_input, "is a non-alphanumeric character.")
elif 47 < ord(inp_input) < 58:
  print(inp_input, "is a digit.")
elif 64 < ord(inp_input) < 91:
  print(inp_input, "is an uppercase letter.")
elif 96 < ord(inp_input) < 123:
  print(inp_input, "is a lowercase letter.")



