from Crypto.Cipher import DES3
import os

# Initialize the encryption key and IV
key = os.urandom(24)
iv = os.urandom(8)

# Create the 3DES cipher object
cipher = DES3.new(key, DES3.MODE_CBC, iv)

# The plaintext message to be encrypted
message = b"Hello, world!"

# Add padding to the plaintext message
pad_len = 8 - (len(message) % 8)
message += bytes([pad_len]) * pad_len

# Encrypt the message in CBC mode
ciphertext = iv + cipher.encrypt(message)

# Print the encrypted message
print(ciphertext)
