namespace m2d {
class PoseDetector {
  public:
    enum Pose {
      question,vsign,arm,standing,beer
    };
    
    static double detect(int i[5]) {
    double p = -1;
    p = PoseDetector::N7aada89b409(i);
    return p;
  }
  static double N7aada89b409(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 4;
    } else if (i[2] <= 10421.0) {
    p = PoseDetector::N1f189709410(i);
    } else if (i[2] > 10421.0) {
    p = PoseDetector::N2dcf5b31438(i);
    } 
    return p;
  }
  static double N1f189709410(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 1;
    } else if (i[1] <= 6332.0) {
    p = PoseDetector::N763dfd2411(i);
    } else if (i[1] > 6332.0) {
    p = PoseDetector::N1e92c7ed431(i);
    } 
    return p;
  }
  static double N763dfd2411(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 1;
    } else if (i[1] <= 6095.0) {
    p = PoseDetector::N2dfb57c8412(i);
    } else if (i[1] > 6095.0) {
    p = PoseDetector::N6dde55d3418(i);
    } 
    return p;
  }
  static double N2dfb57c8412(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 4;
    } else if (i[3] <= 9645.0) {
      p = 4;
    } else if (i[3] > 9645.0) {
    p = PoseDetector::N5040230d413(i);
    } 
    return p;
  }
  static double N5040230d413(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 1;
    } else if (i[1] <= 6062.0) {
      p = 1;
    } else if (i[1] > 6062.0) {
    p = PoseDetector::N22bd53a4414(i);
    } 
    return p;
  }
  static double N22bd53a4414(int i[5]) {
    double p = -1;
    if (i[4] == 0) {
      p = 1;
    } else if (i[4] <= 10051.0) {
      p = 1;
    } else if (i[4] > 10051.0) {
    p = PoseDetector::N3bbe45cd415(i);
    } 
    return p;
  }
  static double N3bbe45cd415(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 1;
    } else if (i[2] <= 9820.0) {
      p = 1;
    } else if (i[2] > 9820.0) {
    p = PoseDetector::N48d8b45f416(i);
    } 
    return p;
  }
  static double N48d8b45f416(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 4;
    } else if (i[3] <= 10182.0) {
    p = PoseDetector::Nb29ee56417(i);
    } else if (i[3] > 10182.0) {
      p = 1;
    } 
    return p;
  }
  static double Nb29ee56417(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 1;
    } else if (i[0] <= 10394.0) {
      p = 1;
    } else if (i[0] > 10394.0) {
      p = 4;
    } 
    return p;
  }
  static double N6dde55d3418(int i[5]) {
    double p = -1;
    if (i[4] == 0) {
      p = 1;
    } else if (i[4] <= 10025.0) {
    p = PoseDetector::N1fd4c7ff419(i);
    } else if (i[4] > 10025.0) {
    p = PoseDetector::N4ff9ec75421(i);
    } 
    return p;
  }
  static double N1fd4c7ff419(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 1;
    } else if (i[1] <= 6230.0) {
      p = 1;
    } else if (i[1] > 6230.0) {
    p = PoseDetector::N4a9646ac420(i);
    } 
    return p;
  }
  static double N4a9646ac420(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 4;
    } else if (i[3] <= 9546.0) {
      p = 4;
    } else if (i[3] > 9546.0) {
      p = 3;
    } 
    return p;
  }
  static double N4ff9ec75421(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 1;
    } else if (i[2] <= 9745.0) {
    p = PoseDetector::N21131e58422(i);
    } else if (i[2] > 9745.0) {
    p = PoseDetector::N2b7da559425(i);
    } 
    return p;
  }
  static double N21131e58422(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 1;
    } else if (i[1] <= 6247.0) {
    p = PoseDetector::N6e2d345e423(i);
    } else if (i[1] > 6247.0) {
    p = PoseDetector::N59c93fd4424(i);
    } 
    return p;
  }
  static double N6e2d345e423(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 4;
    } else if (i[3] <= 9670.0) {
      p = 4;
    } else if (i[3] > 9670.0) {
      p = 1;
    } 
    return p;
  }
  static double N59c93fd4424(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 3;
    } else if (i[2] <= 9670.0) {
      p = 3;
    } else if (i[2] > 9670.0) {
      p = 4;
    } 
    return p;
  }
  static double N2b7da559425(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 4;
    } else if (i[3] <= 9670.0) {
      p = 4;
    } else if (i[3] > 9670.0) {
    p = PoseDetector::N45f28c5d426(i);
    } 
    return p;
  }
  static double N45f28c5d426(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 4;
    } else if (i[3] <= 10025.0) {
    p = PoseDetector::N36dd518b427(i);
    } else if (i[3] > 10025.0) {
    p = PoseDetector::N2c3cbf54429(i);
    } 
    return p;
  }
  static double N36dd518b427(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 4;
    } else if (i[2] <= 9795.0) {
    p = PoseDetector::N7c1498d0428(i);
    } else if (i[2] > 9795.0) {
      p = 4;
    } 
    return p;
  }
  static double N7c1498d0428(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 1;
    } else if (i[0] <= 10502.0) {
      p = 1;
    } else if (i[0] > 10502.0) {
      p = 4;
    } 
    return p;
  }
  static double N2c3cbf54429(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 4;
    } else if (i[3] <= 10208.0) {
    p = PoseDetector::N48353a7c430(i);
    } else if (i[3] > 10208.0) {
      p = 1;
    } 
    return p;
  }
  static double N48353a7c430(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 4;
    } else if (i[1] <= 6298.0) {
      p = 4;
    } else if (i[1] > 6298.0) {
      p = 3;
    } 
    return p;
  }
  static double N1e92c7ed431(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 4;
    } else if (i[3] <= 9570.0) {
      p = 4;
    } else if (i[3] > 9570.0) {
    p = PoseDetector::N3683a849432(i);
    } 
    return p;
  }
  static double N3683a849432(int i[5]) {
    double p = -1;
    if (i[4] == 0) {
      p = 3;
    } else if (i[4] <= 10182.0) {
    p = PoseDetector::N7d9d6c94433(i);
    } else if (i[4] > 10182.0) {
    p = PoseDetector::Naa9f0435(i);
    } 
    return p;
  }
  static double N7d9d6c94433(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 3;
    } else if (i[2] <= 10314.0) {
      p = 3;
    } else if (i[2] > 10314.0) {
    p = PoseDetector::N6a43a8f9434(i);
    } 
    return p;
  }
  static double N6a43a8f9434(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 3;
    } else if (i[1] <= 6684.0) {
      p = 3;
    } else if (i[1] > 6684.0) {
      p = 2;
    } 
    return p;
  }
  static double Naa9f0435(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 4;
    } else if (i[2] <= 10261.0) {
    p = PoseDetector::N3c1acb95436(i);
    } else if (i[2] > 10261.0) {
      p = 2;
    } 
    return p;
  }
  static double N3c1acb95436(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 4;
    } else if (i[1] <= 6350.0) {
      p = 4;
    } else if (i[1] > 6350.0) {
    p = PoseDetector::N32bc207437(i);
    } 
    return p;
  }
  static double N32bc207437(int i[5]) {
    double p = -1;
    if (i[4] == 0) {
      p = 3;
    } else if (i[4] <= 10261.0) {
      p = 3;
    } else if (i[4] > 10261.0) {
      p = 4;
    } 
    return p;
  }
  static double N2dcf5b31438(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 0;
    } else if (i[0] <= 9595.0) {
    p = PoseDetector::N86c0576439(i);
    } else if (i[0] > 9595.0) {
    p = PoseDetector::N49f4507b460(i);
    } 
    return p;
  }
  static double N86c0576439(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 2;
    } else if (i[2] <= 10833.0) {
    p = PoseDetector::N6bda8a4b440(i);
    } else if (i[2] > 10833.0) {
    p = PoseDetector::N64f302ed442(i);
    } 
    return p;
  }
  static double N6bda8a4b440(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 2;
    } else if (i[2] <= 10805.0) {
      p = 2;
    } else if (i[2] > 10805.0) {
    p = PoseDetector::N58ad793e441(i);
    } 
    return p;
  }
  static double N58ad793e441(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 0;
    } else if (i[1] <= 6524.0) {
      p = 0;
    } else if (i[1] > 6524.0) {
      p = 2;
    } 
    return p;
  }
  static double N64f302ed442(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 0;
    } else if (i[0] <= 9472.0) {
      p = 0;
    } else if (i[0] > 9472.0) {
    p = PoseDetector::Ne454962443(i);
    } 
    return p;
  }
  static double Ne454962443(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 0;
    } else if (i[1] <= 6506.0) {
      p = 0;
    } else if (i[1] > 6506.0) {
    p = PoseDetector::N66d4c83f444(i);
    } 
    return p;
  }
  static double N66d4c83f444(int i[5]) {
    double p = -1;
    if (i[4] == 0) {
      p = 2;
    } else if (i[4] <= 10051.0) {
    p = PoseDetector::N1ba6d4d7445(i);
    } else if (i[4] > 10051.0) {
    p = PoseDetector::N1a0ab441449(i);
    } 
    return p;
  }
  static double N1ba6d4d7445(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 2;
    } else if (i[2] <= 11985.0) {
    p = PoseDetector::N65df7d6f446(i);
    } else if (i[2] > 11985.0) {
      p = 0;
    } 
    return p;
  }
  static double N65df7d6f446(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 0;
    } else if (i[1] <= 6595.0) {
    p = PoseDetector::N33a436a9447(i);
    } else if (i[1] > 6595.0) {
      p = 2;
    } 
    return p;
  }
  static double N33a436a9447(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 0;
    } else if (i[0] <= 9521.0) {
      p = 0;
    } else if (i[0] > 9521.0) {
    p = PoseDetector::N6200abbb448(i);
    } 
    return p;
  }
  static double N6200abbb448(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 2;
    } else if (i[1] <= 6577.0) {
      p = 2;
    } else if (i[1] > 6577.0) {
      p = 0;
    } 
    return p;
  }
  static double N1a0ab441449(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 0;
    } else if (i[2] <= 11648.0) {
    p = PoseDetector::N34c024c2450(i);
    } else if (i[2] > 11648.0) {
      p = 0;
    } 
    return p;
  }
  static double N34c024c2450(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 2;
    } else if (i[2] <= 11145.0) {
    p = PoseDetector::N32ad579c451(i);
    } else if (i[2] > 11145.0) {
    p = PoseDetector::N329acd33454(i);
    } 
    return p;
  }
  static double N32ad579c451(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 0;
    } else if (i[0] <= 9496.0) {
      p = 0;
    } else if (i[0] > 9496.0) {
    p = PoseDetector::N1252dcc2452(i);
    } 
    return p;
  }
  static double N1252dcc2452(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 2;
    } else if (i[3] <= 10051.0) {
      p = 2;
    } else if (i[3] > 10051.0) {
    p = PoseDetector::N7e1b4df3453(i);
    } 
    return p;
  }
  static double N7e1b4df3453(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 0;
    } else if (i[0] <= 9570.0) {
      p = 0;
    } else if (i[0] > 9570.0) {
      p = 2;
    } 
    return p;
  }
  static double N329acd33454(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 0;
    } else if (i[1] <= 6720.0) {
    p = PoseDetector::N5115e939455(i);
    } else if (i[1] > 6720.0) {
    p = PoseDetector::N4948c70e458(i);
    } 
    return p;
  }
  static double N5115e939455(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 0;
    } else if (i[3] <= 10103.0) {
      p = 0;
    } else if (i[3] > 10103.0) {
    p = PoseDetector::N7582c6c5456(i);
    } 
    return p;
  }
  static double N7582c6c5456(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 0;
    } else if (i[1] <= 6613.0) {
    p = PoseDetector::N5cc7ebc8457(i);
    } else if (i[1] > 6613.0) {
      p = 0;
    } 
    return p;
  }
  static double N5cc7ebc8457(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 0;
    } else if (i[1] <= 6559.0) {
      p = 0;
    } else if (i[1] > 6559.0) {
      p = 2;
    } 
    return p;
  }
  static double N4948c70e458(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 0;
    } else if (i[2] <= 11232.0) {
      p = 0;
    } else if (i[2] > 11232.0) {
    p = PoseDetector::N49048db8459(i);
    } 
    return p;
  }
  static double N49048db8459(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 0;
    } else if (i[3] <= 9670.0) {
      p = 0;
    } else if (i[3] > 9670.0) {
      p = 2;
    } 
    return p;
  }
  static double N49f4507b460(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 0;
    } else if (i[1] <= 6419.0) {
    p = PoseDetector::N46cfe12b461(i);
    } else if (i[1] > 6419.0) {
    p = PoseDetector::N7977a7fa468(i);
    } 
    return p;
  }
  static double N46cfe12b461(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 3;
    } else if (i[2] <= 10721.0) {
    p = PoseDetector::N79c7f25e462(i);
    } else if (i[2] > 10721.0) {
    p = PoseDetector::N35f937c8463(i);
    } 
    return p;
  }
  static double N79c7f25e462(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 3;
    } else if (i[3] <= 9820.0) {
      p = 3;
    } else if (i[3] > 9820.0) {
      p = 1;
    } 
    return p;
  }
  static double N35f937c8463(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 0;
    } else if (i[0] <= 10000.0) {
    p = PoseDetector::N7cbd4726464(i);
    } else if (i[0] > 10000.0) {
    p = PoseDetector::N3a7b058e466(i);
    } 
    return p;
  }
  static double N7cbd4726464(int i[5]) {
    double p = -1;
    if (i[4] == 0) {
      p = 0;
    } else if (i[4] <= 9846.0) {
    p = PoseDetector::N6e8a4fc4465(i);
    } else if (i[4] > 9846.0) {
      p = 0;
    } 
    return p;
  }
  static double N6e8a4fc4465(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 0;
    } else if (i[1] <= 6332.0) {
      p = 0;
    } else if (i[1] > 6332.0) {
      p = 2;
    } 
    return p;
  }
  static double N3a7b058e466(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 0;
    } else if (i[1] <= 6384.0) {
      p = 0;
    } else if (i[1] > 6384.0) {
    p = PoseDetector::N62a9cba0467(i);
    } 
    return p;
  }
  static double N62a9cba0467(int i[5]) {
    double p = -1;
    if (i[3] == 0) {
      p = 2;
    } else if (i[3] <= 10234.0) {
      p = 2;
    } else if (i[3] > 10234.0) {
      p = 0;
    } 
    return p;
  }
  static double N7977a7fa468(int i[5]) {
    double p = -1;
    if (i[4] == 0) {
      p = 2;
    } else if (i[4] <= 10557.0) {
    p = PoseDetector::N1eb54c63469(i);
    } else if (i[4] > 10557.0) {
      p = 0;
    } 
    return p;
  }
  static double N1eb54c63469(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 2;
    } else if (i[0] <= 9795.0) {
    p = PoseDetector::N10aa0755470(i);
    } else if (i[0] > 9795.0) {
      p = 2;
    } 
    return p;
  }
  static double N10aa0755470(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 2;
    } else if (i[2] <= 11800.0) {
    p = PoseDetector::Nac765ff471(i);
    } else if (i[2] > 11800.0) {
    p = PoseDetector::N4da002eb486(i);
    } 
    return p;
  }
  static double Nac765ff471(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 2;
    } else if (i[1] <= 6648.0) {
    p = PoseDetector::N28f94de0472(i);
    } else if (i[1] > 6648.0) {
      p = 2;
    } 
    return p;
  }
  static double N28f94de0472(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 0;
    } else if (i[1] <= 6489.0) {
    p = PoseDetector::N767c224473(i);
    } else if (i[1] > 6489.0) {
    p = PoseDetector::N4ab83276476(i);
    } 
    return p;
  }
  static double N767c224473(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 2;
    } else if (i[2] <= 11379.0) {
      p = 2;
    } else if (i[2] > 11379.0) {
    p = PoseDetector::N2cfacd48474(i);
    } 
    return p;
  }
  static double N2cfacd48474(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 0;
    } else if (i[1] <= 6471.0) {
      p = 0;
    } else if (i[1] > 6471.0) {
    p = PoseDetector::N5bb490a475(i);
    } 
    return p;
  }
  static double N5bb490a475(int i[5]) {
    double p = -1;
    if (i[4] == 0) {
      p = 2;
    } else if (i[4] <= 10129.0) {
      p = 2;
    } else if (i[4] > 10129.0) {
      p = 0;
    } 
    return p;
  }
  static double N4ab83276476(int i[5]) {
    double p = -1;
    if (i[4] == 0) {
      p = 2;
    } else if (i[4] <= 10129.0) {
      p = 2;
    } else if (i[4] > 10129.0) {
    p = PoseDetector::N2f9074d477(i);
    } 
    return p;
  }
  static double N2f9074d477(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 2;
    } else if (i[2] <= 11379.0) {
    p = PoseDetector::N2b4e51c1478(i);
    } else if (i[2] > 11379.0) {
    p = PoseDetector::N7b39e881483(i);
    } 
    return p;
  }
  static double N2b4e51c1478(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 2;
    } else if (i[0] <= 9670.0) {
      p = 2;
    } else if (i[0] > 9670.0) {
    p = PoseDetector::N22d96c1d479(i);
    } 
    return p;
  }
  static double N22d96c1d479(int i[5]) {
    double p = -1;
    if (i[4] == 0) {
      p = 2;
    } else if (i[4] <= 10448.0) {
    p = PoseDetector::N7048f5ca480(i);
    } else if (i[4] > 10448.0) {
      p = 0;
    } 
    return p;
  }
  static double N7048f5ca480(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 2;
    } else if (i[0] <= 9770.0) {
    p = PoseDetector::N4600da5d481(i);
    } else if (i[0] > 9770.0) {
      p = 2;
    } 
    return p;
  }
  static double N4600da5d481(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 2;
    } else if (i[1] <= 6613.0) {
      p = 2;
    } else if (i[1] > 6613.0) {
    p = PoseDetector::N62003392482(i);
    } 
    return p;
  }
  static double N62003392482(int i[5]) {
    double p = -1;
    if (i[2] == 0) {
      p = 2;
    } else if (i[2] <= 11174.0) {
      p = 2;
    } else if (i[2] > 11174.0) {
      p = 0;
    } 
    return p;
  }
  static double N7b39e881483(int i[5]) {
    double p = -1;
    if (i[0] == 0) {
      p = 0;
    } else if (i[0] <= 9695.0) {
    p = PoseDetector::N16cfac5b484(i);
    } else if (i[0] > 9695.0) {
      p = 2;
    } 
    return p;
  }
  static double N16cfac5b484(int i[5]) {
    double p = -1;
    if (i[1] == 0) {
      p = 0;
    } else if (i[1] <= 6577.0) {
      p = 0;
    } else if (i[1] > 6577.0) {
    p = PoseDetector::N1c3c9610485(i);
    } 
    return p;
  }
  static double N1c3c9610485(int i[5]) {
    double p = -1;
    if (i[4] == 0) {
      p = 2;
    } else if (i[4] <= 10261.0) {
      p = 2;
    } else if (i[4] > 10261.0) {
      p = 0;
    } 
    return p;
  }
  static double N4da002eb486(int i[5]) {
    double p = -1;
    if (i[4] == 0) {
      p = 2;
    } else if (i[4] <= 10000.0) {
      p = 2;
    } else if (i[4] > 10000.0) {
      p = 0;
    } 
    return p;
  }
};
}
