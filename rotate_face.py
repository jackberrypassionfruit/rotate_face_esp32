happy_face =    [
    'B00111100',
    'B01000010',
    'B10100101',
    'B10000001',
    'B10100101',
    'B10011001',
    'B01000010',
    'B00111100' 
]

neutral_face =  [
    'B00111100',
    'B01000010',
    'B10100101',
    'B10000001',
    'B10111101',
    'B10000001',
    'B01000010',
    'B00111100' 
]

sad_face = [
    'B00111100',
    'B01000010',
    'B10100101',
    'B10000001',
    'B10011001',
    'B10100101',
    'B01000010',
    'B00111100' 
]

def rotate_face(face: list) -> list:
    new_face = [''] * len(face)
    for col in range(1, len(face[0])):
        for row in face:
            new_face[col-1] = row[col] + new_face[col-1]
    return new_face

for face in [happy_face, neutral_face, sad_face]:
    face_rotated = rotate_face(face) 
    print('{B'+', B'.join(face_rotated)+'}')