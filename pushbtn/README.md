readme_content_fa_led_btn = """
# پروژه Arduino: کنترل LED با استفاده از دکمه فشاری

## مقدمه
این پروژه Arduino با استفاده از یک LED و دکمه فشاری (Push Button) طراحی شده است. در این پروژه، با فشردن دکمه، LED روشن می‌شود و پس از رها کردن آن، LED خاموش می‌شود.

## توضیحات کد
کد پروژه شامل دو بخش اصلی است:
1. **setup()**: در این بخش، پین‌های مربوط به LED و دکمه فشاری تنظیم می‌شوند.
2. **loop()**: این بخش به صورت مداوم اجرا می‌شود و وضعیت دکمه فشاری را بررسی می‌کند. اگر دکمه فشرده شده باشد، LED روشن و در غیر این صورت، خاموش می‌شود.

## بخش‌هایی از کد
```cpp
const int led = 13;  // پین مربوط به LED
const int pushbtn = 2;  // پین مربوط به دکمه فشاری
int pinstate = 0;  // متغیری برای ذخیره وضعیت دکمه

void setup() {
  pinMode(led, OUTPUT);  // تنظیم پین LED به عنوان خروجی
  pinMode(pushbtn, INPUT);  // تنظیم پین دکمه به عنوان ورودی
}

void loop() {
  digitalWrite(led, LOW);  // خاموش کردن LED به صورت پیش‌فرض
  pinstate = digitalRead(pushbtn);  // خواندن وضعیت دکمه فشاری
  
  // بررسی وضعیت دکمه
  if (pinstate == HIGH) {
    digitalWrite(led, HIGH);  // روشن کردن LED در صورت فشردن دکمه
    delay(100);  // تاخیر 100 میلی‌ثانیه
  } else {
    digitalWrite(led, LOW);  // خاموش کردن LED در صورت عدم فشردن دکمه
  }
}