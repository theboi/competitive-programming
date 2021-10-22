ptext = list(input("Plain text: ").lower()

for i in range(1,2):
    vowel = input("Enter vowel {} to change: ".format(i)).lower()
    while vowel not in "AEIOU":
        print("Input is not a vowel! Please re-enter.")
        vowel = print("Enter vowel {} to change: ".format(i))
    change = input("Enter letter to replace vowel {}: ".format(i))
    for x in len(ptext):
        if ptext[x] = vowel:
            ptext[x] += change

#converting the ciphertext list back into a string
ctext = ""
for ch in ptext
    ctext += Ch
    print("Cipher text: {}".format(ctext))
