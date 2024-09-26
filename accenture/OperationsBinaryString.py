def OperationsBinaryString(str): #1C0C1C1A0B1
    x = int(str[0])
    i = 1
    while i <len(str):
        if str[i]=='A':
            x &= int(str[i+1])
        if str[i]=='B':
            x |= int(str[i+1])
        else:
            x ^= int(str[i+1])
        i+=2
    return a
