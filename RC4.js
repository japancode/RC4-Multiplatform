function rc4_perform(input, key) {
    let encrypted = new Uint8Array(input.length);
    let x, y, j = 0;
    let box = new Number(256);

    for (let i = 0; i < 256; i++) box[i] = i;

    for (let i = 0; i < 256; i++) {
        j = (key[i % key.length] + box[i] + j) % 256;
        x = box[i];
        box[i] = box[j];
        box[j] = x;
    }

    for (let i = 0; i < input.length; i++) {
        y = (i + 1) % 256;
        j = (box[y] + j) % 256;
        x = box[y];
        box[y] = box[j];
        box[j] = x;

        encrypted[i] = (input[i] ^ box[(box[y] + box[j]) % 256]);
    }

    return encrypted;
}