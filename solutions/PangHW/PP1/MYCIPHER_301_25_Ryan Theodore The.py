ptext = list(input("Plain text: ").lower()) # S

for i in range(1,3): # L
    vowel = input("Enter vowel {} to change: ".format(i)).lower()
    while not vowel in "aeiou": # L
        print("Input is not a vowel! Please re-enter.")
        vowel = input("Enter vowel {} to change: ".format(i)).lower() # L
    change = input("Enter letter to replace vowel {}: ".format(i))
    for x in range(len(ptext)): # S, L
        if ptext[x] == vowel: # S
            ptext[x] = change # L

#converting the ciphertext list back into a string
ctext = ""
for ch in ptext: # S
    ctext += ch # S

print("Cipher text: {}".format(ctext)) # L