import string
from collections import Counter
alphabet = string.ascii_lowercase
num_possible_plaintexts = 10
ciphertext = 'KHOOR ZRUOG'
ciphertext = ciphertext.lower()
ciphertext = ciphertext.replace(' ', '')

freq_analysis = Counter(ciphertext)
total_chars = sum(freq_analysis.values())
for letter in alphabet:
    freq = freq_analysis[letter] / total_chars
    print('{}: {:.2%}'.format(letter, freq))
print('\nPossible plaintexts:')
for key in range(26):
    plaintext = ''
    for letter in ciphertext:
        if letter in alphabet:
            index = (alphabet.index(letter) - key) % 26
            plaintext += alphabet[index]
        else:
            plaintext += letter

    freq_analysis = Counter(plaintext)
    total_chars = sum(freq_analysis.values())

    score=0
    for letter in alphabet:
        freq = freq_analysis[letter] / total_chars
        expected_freq = 0.08167  # English letter frequency
        diff = abs(expected_freq - freq)
        score += diff

    print('{} (key={}): score={:.2f}'.format(plaintext.upper(), key, score))

    if key == num_possible_plaintexts - 1:
        break
