wardrobe = {"shirt":["red","blue","white"], "jeans":["blue","black"]}
for element in wardrobe:
    for colour in wardrobe[element]:
        print("{} {}".format(colour,element))