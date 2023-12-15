class Solution {
public:
         string intToHexa(int num) {
        stringstream stream;
         stream << hex << num;
        return stream.str();
}
    string toHex(int num) {
        return intToHexa(num);
        
    }
};