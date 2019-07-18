//=======================================================
// Accelerometer and gyro statistical data 
// 加速度センサとジャイロセンサの測定値の平均や分散を扱う変数を定義
//=======================================================
int sample_num = 100;
float meas_interval = 0.01;
float theta_mean;
float theta_variance;
float theta_dot_mean;
float theta_dot_variance;

//=======================================================
// Kalman filter (for angle estimation) variables
// カルマン・フィルタの更新頻度や、使用するモデルなどを定義
//=======================================================
//Update rate
float theta_update_freq = 400; //Hz
float theta_update_interval = 1.0/double(theta_update_freq);

//State vector
//[[theta(degree)], [offset of theta_dot(degree/sec)]]
float theta_data_predict[2][1];
float theta_data[2][1];

//Covariance matrix
float P_theta_predict[2][2];
float P_theta[2][2];

//"A" of the state equation
float A_theta[2][2] = {{1, -theta_update_interval}, {0, 1}};

//"B" of the state equation
float B_theta[2][1] = {{theta_update_interval}, [0}};

//"C" of the state equation
float C_theta[1][2] = {{1, 0}};

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
