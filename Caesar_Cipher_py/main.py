#python program for a code encryptor in python
print("Hello World!")
shift = int(input("Enter the shift value: "))
message = input("Enter the message to encrypt: ")
def encrypt(message, shift):

    if not isinstance(shift, int):
        return "Shift value must be an integer."
    if shift < 0 or shift > 25:
        return "Shift value must be between 0 and 25."

    alphabet = "abcdefghijklmnopqrstuvwxyz"
    corres = alphabet[shift:] + alphabet[:shift]

    translated = str.maketrans(alphabet + alphabet.upper(), corres + corres.upper())
    encrypted_message = message.translate(translated)
    return encrypted_message

encrypted_message = encrypt(message, shift)
print("Encrypted message: " + encrypted_message)