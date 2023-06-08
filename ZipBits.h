#ifndef zipbits_h
#define zipbits_h

#include <iostream>
#include <queue>
#include <unordered_map>
#include <fstream>

using namespace std;

// Define additional data structures or headers for handling different data types

struct Node {
    // Node structure remains the same
};

struct Compare {
    // Compare structure remains the same
};

unordered_map<char, string> encodeData;

// Define additional functions for handling different data types

unordered_map<char, int> buildFrequencyTable(const string& data) {
    // Function remains the same for text-based data
}

Node* buildHuffmanTree(const unordered_map<char, int>& frequencyTable) {
    // Function remains the same for text-based data
}

void generateHuffmanCodes(Node* root, string code) {
    // Function remains the same for text-based data
}

string compressData(const string& data) {
    // Function remains the same for text-based data
}

string decompressData(Node* root, const string& compressedData) {
    // Function remains the same for text-based data
}

void compressFile(const string& filePath, const string& compressedFilePath) {
    // Implement functionality to compress files of different types
}

void decompressFile(const string& compressedFilePath, const string& decompressedFilePath) {
    // Implement functionality to decompress files of different types
}

double calculateCompressionRatio(const string& originalData, const string& compressedData) {
    // Implement functionality to calculate compression ratio
}

    // Code remains the same for text-based data

    // Example usage for handling different data types
    string imagePath = "image.jpg";
    string compressedImagePath = "compressed_image.bin";

    compressFile(imagePath, compressedImagePath);
    // Handle compressed image file accordingly

    string audioPath = "audio.wav";
    string compressedAudioPath = "compressed_audio.bin";

    compressFile(audioPath, compressedAudioPath);
    // Handle compressed audio file accordingly

    // Example usage for compression ratio analysis
    double compressionRatio = calculateCompressionRatio(data, compressedData);
    cout << "Compression Ratio: " << compressionRatio << endl;

    return 0;

#endif
