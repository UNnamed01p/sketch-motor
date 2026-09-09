#include <Servo.h>

constexpr uint8_t SERVO_PIN = 12;
constexpr int TARGET_ANGLE = 170;

Servo motor1;

void setup() {
  motor1.attach(SERVO_PIN);
  motor1.write(TARGET_ANGLE);  // 일반 서보모터를 목표 각도로 이동
}

void loop() {
  // 목표 각도는 setup()에서 한 번만 설정합니다.
}
