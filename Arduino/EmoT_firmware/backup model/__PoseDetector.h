class PoseDetector {

  public:
    enum Pose {
      question,vsign,arm,standing,beer
    };
   static double classify(int i[5])
    {

    double p = -1;
    p = PoseDetector::N21421ac330(i);
    return p;
  }
  static double N21421ac330(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 2;
    } else if (i[1] <= 7613.0) {
    p = PoseDetector::N7aeb094331(i);
    } else if (i[1] > 7613.0) {
    p = PoseDetector::N724f2b5840(i);
    } 
    return p;
  }
  static double N7aeb094331(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 3;
    } else if (i[0] <= 10557.0) {
    p = PoseDetector::N5cad4cc032(i);
    } else if (i[0] > 10557.0) {
      p = 2;
    } 
    return p;
  }
  static double N5cad4cc032(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 3;
    } else if (i[1] <= 7454.0) {
      p = 3;
    } else if (i[1] > 7454.0) {
    p = PoseDetector::N758a00c833(i);
    } 
    return p;
  }
  static double N758a00c833(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 1;
    } else if (i[0] <= 9974.0) {
    p = PoseDetector::N373986c134(i);
    } else if (i[0] > 9974.0) {
      p = 3;
    } 
    return p;
  }
  static double N373986c134(int i[5]) {
    double p = -1;
    if (i[4] == 0) {
      p = 3;
    } else if (i[4] <= 10421.0) {
    p = PoseDetector::N21be053a35(i);
    } else if (i[4] > 10421.0) {
    p = PoseDetector::N4249342436(i);
    } 
    return p;
  }
  static double N21be053a35(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 3;
    } else if (i[3] <= 11031.0) {
      p = 3;
    } else if (i[3] > 11031.0) {
      p = 1;
    } 
    return p;
  }
  static double N4249342436(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 1;
    } else if (i[1] <= 7553.0) {
    p = PoseDetector::N53fe497b37(i);
    } else if (i[1] > 7553.0) {
      p = 1;
    } 
    return p;
  }
  static double N53fe497b37(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 3;
    } else if (i[2] <= 10945.0) {
    p = PoseDetector::N5b8a555138(i);
    } else if (i[2] > 10945.0) {
      p = 1;
    } 
    return p;
  }
  static double N5b8a555138(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 3;
    } else if (i[0] <= 9795.0) {
      p = 3;
    } else if (i[0] > 9795.0) {
    p = PoseDetector::N56e767ca39(i);
    } 
    return p;
  }
  static double N56e767ca39(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 3;
    } else if (i[1] <= 7494.0) {
      p = 3;
    } else if (i[1] > 7494.0) {
      p = 1;
    } 
    return p;
  }
  static double N724f2b5840(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 4;
    } else if (i[3] <= 10208.0) {
    p = PoseDetector::N2ba6d90941(i);
    } else if (i[3] > 10208.0) {
    p = PoseDetector::N688245a643(i);
    } 
    return p;
  }
  static double N2ba6d90941(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 4;
    } else if (i[1] <= 8742.0) {
      p = 4;
    } else if (i[1] > 8742.0) {
    p = PoseDetector::N56f2f44242(i);
    } 
    return p;
  }
  static double N56f2f44242(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 4;
    } else if (i[1] <= 8925.0) {
      p = 4;
    } else if (i[1] > 8925.0) {
      p = 0;
    } 
    return p;
  }
  static double N688245a643(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 1;
    } else if (i[1] <= 8607.0) {
    p = PoseDetector::N40aacae444(i);
    } else if (i[1] > 8607.0) {
    p = PoseDetector::N5664d4ff48(i);
    } 
    return p;
  }
  static double N40aacae444(int i[5]) {
    double p = -1;
    if (i[4] == 0) {
      p = 1;
    } else if (i[4] <= 10314.0) {
    p = PoseDetector::Ncee5fe745(i);
    } else if (i[4] > 10314.0) {
    p = PoseDetector::N75da3d5246(i);
    } 
    return p;
  }
  static double Ncee5fe745(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 3;
    } else if (i[1] <= 7795.0) {
      p = 3;
    } else if (i[1] > 7795.0) {
      p = 1;
    } 
    return p;
  }
  static double N75da3d5246(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 1;
    } else if (i[0] <= 10025.0) {
      p = 1;
    } else if (i[0] > 10025.0) {
    p = PoseDetector::N4af00ef047(i);
    } 
    return p;
  }
  static double N4af00ef047(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 3;
    } else if (i[1] <= 7734.0) {
      p = 3;
    } else if (i[1] > 7734.0) {
      p = 1;
    } 
    return p;
  }
  static double N5664d4ff48(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 0;
    } else if (i[1] <= 8719.0) {
    p = PoseDetector::N75dbdda849(i);
    } else if (i[1] > 8719.0) {
      p = 0;
    } 
    return p;
  }
  static double N75dbdda849(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 0;
    } else if (i[3] <= 10805.0) {
      p = 0;
    } else if (i[3] > 10805.0) {
      p = 1;
    } 
    return p;
  }
};

