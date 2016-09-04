#include <HashMap.h>

const int DOT = 100;
const int DASH = 1000;
const byte HASH_SIZE = 3; 
HashType<char*,char*> hashRawArray[HASH_SIZE]; 
HashMap<char*,char*> hashMap = HashMap<char*,char*>( hashRawArray , HASH_SIZE );
const byte HASH_SIZE_SIG = 2; 
HashType<char*,int> hashRawSigArray[HASH_SIZE_SIG]; 
HashMap<char*,int> hashMapSig = HashMap<char*,int>( hashRawSigArray , HASH_SIZE_SIG );

void setup() {
  // put your setup code here, to run once:
  
//  hashMap[0]("a",".-");
//  hashMap[1]("b","-...");
//  hashMap[2]("c","-.-");
//  hashMap[3]("d","-..");
//  hashMap[4]("e",".");
//  hashMap[5]("f","..-.");
//  hashMap[6]("g","--.");
//  hashMap[7]("h","....");
//  hashMap[8]("i","..");
//  hashMap[9]("j",".---");
//  hashMap[10]("k","-.");
//  hashMap[11]("l",".-..");
//  hashMap[12]("m","--");
//  hashMap[13]("n","-.");
//  hashMap[14]("o","---");
//  hashMap[15]("p",".--.");
//  hashMap[16]("q","--.-");
//  hashMap[17]("r",".-.");
//  hashMap[18]("s","...");
//  hashMap[19]("t","-");
//  hashMap[20]("u","..-");
//  hashMap[21]("v","...-");
//  hashMap[22]("w",".--");
//  hashMap[23]("x","-..-");
//  hashMap[24]("y","-.--");
//  hashMap[25]("z","--..");
//  hashMap[26]("1",".----");
//  hashMap[27]("2","..---");
//  hashMap[28]("3","...--");
//  hashMap[29]("4","....-");
//  hashMap[30]("5",".....");
//  hashMap[31]("6","-....");
//  hashMap[32]("7","--...");
//  hashMap[33]("8","---..");
//  hashMap[34]("9","----.");
//  hashMap[35]("0","-----");
//  hashMapSig[0](".",DOT);
//  hashMapSig[1]("-",DASH);
 
//  Serial.begin(9600);
//  Serial.println( hashMap.getIndexOf("test"),DEC );
//  Serial.println( hashMap.getValueOf("test") );
 
//  hashMap.debug();
//  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(1000);              // wait for a second
//  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
//  delay(1000);              // wait for a second
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  String name = "ndegwa";
  
  String code;
  for (int i = 0; i< name.length(); i++){
    Serial.println(name[i]);
//    code = hashMap.getValueOf(name[i]);
//    Serial.println(code);
  }
  

}
