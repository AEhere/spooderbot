
  #include <Servo.h>

  Servo FwdRA;  //Forward Right leg, servo A (body to coxa)
  Servo FwdRB;  //Forward Right leg, servo B (coxa to femur)
  Servo FwdRC;  //Forward Right leg, servo C (femur to tibia)

  Servo AftRA;  //Aft Right leg, servo A
  Servo AftRB;
  Servo AftRC;

  Servo FwdLA;  //Forward Left leg, servo A
  Servo FwdLB;
  Servo FwdLC;

  Servo AftLA;  //Aft Left leg, servo A
  Servo AftLB;
  Servo AftLC;

  int posAHome = 0;
  int posBHome = 0;
  int posCHome = 0;




void setup() {

  //attach the servos to their pins

  FwdRA.attach(0);
  FwdRB.attach(1);
  FwdRC.attach(2);

  AftRA.attach(3);
  AftRB.attach(4);
  AftRC.attach(5);

  FwdLA.attach(6);
  FwdLB.attach(7);
  FwdLC.attach(8);

  AftLA.attach(9);
  AftLB.attach(10);
  AftLC.attach(11);

  //write home positions to the servos

  FwdRA.write(posAHome);
  FwdRB.write(posBHome);
  FwdRC.write(posCHome);

  AftRA.write(posAHome);
  AftRB.write(posBHome);
  AftRC.write(posCHome);

  FwdLA.write(posAHome);
  FwdLB.write(posBHome);
  FwdLC.write(posCHome);

  AftLA.write(posAHome);
  AftLB.write(posBHome);
  AftLC.write(posCHome);

  delay(1000); //wait one second

}

void loop() {
  // put your main code here, to run repeatedly:

}

void extendLeg(bool _fwd, bool _right){
  //take 2 bools to know which leg,
  //then write extension commands to
  //servos B and C in the correct leg

  int _posFwdRBExtend = 0;
  int _posFwdRCExtend = 0;

  // Fwd Right leg is the reference one
  // all other legs derive their positions
  // by transforming those of FwdR

  int _posFwdLBExtend = 0;
  int _posFwdLCExtend = 0;

  int _posAftRBExtend = 0;
  int _posAftRCExtend = 0;

  int _posAftLBExtend = 0;
  int _posAftLCExtend = 0;

  if (_fwd){
    if (_right){
      //FwdRA.write(0);
      FwdRB.write(_posFwdRBExtend);
      FwdRC.write(_posFwdRCExtend);
      delay(250);
      }
    else if(!_right){
      //FwdLA.write(6);
      FwdLB.write(_posFwdLBExtend);
      FwdLC.write(_posFwdLCExtend);
      delay(250);
      }
    }
   else if (!_fwd){
    if (_right){
      //FwdRA.write(0);
      AftRB.write(_posAftRBExtend);
      AftRC.write(_posAftRCExtend);
      delay(250);
      }
    else if(!_right){
      //FwdLA.write(6);
      AftLB.write(_posAftLBExtend);
      AftLC.write(_posAftLCExtend);
      delay(250);
      }
    }
}

void homeLeg(bool _fwd, bool _right){
  //take 2 bools to know which leg,
  //then write home commands to
  //servos B and C in the correct leg

  int _posFwdRBHome = 0;
  int _posFwdRCHome = 0;

    // Fwd Right leg is the reference one
    // all other legs derive their positions
    // by transforming those of FwdR

  int _posFwdLBHome = 0;
  int _posFwdLCHome = 0;

  int _posAftRBHome = 0;
  int _posAftRCHome = 0;

  int _posAftLBHome = 0;
  int _posAftLCHome = 0;

  if (_fwd){
    if (_right){
      //FwdRA.write(0);
      FwdRB.write(_posFwdRBHome);
      FwdRC.write(_posFwdRCHome);
      delay(250);
      }
    else if(!_right){
      //FwdLA.write(6);
      FwdLB.write(_posFwdLBHome);
      FwdLC.write(_posFwdLCHome);
      delay(250);
      }
    }
   else if (!_fwd){
    if (_right){
      //FwdRA.write(0);
      AftRB.write(_posAftRBHome);
      AftRC.write(_posAftRCHome);
      delay(250);
      }
    else if(!_right){
      //FwdLA.write(6);
      AftLB.write(_posAftLBHome);
      AftLC.write(_posAftLCHome);
      delay(250);
      }
    }
  }

void advanceLeg(bool _fwd, bool _right, int _deg /*degrees to advance*/) {
  /* code */
}