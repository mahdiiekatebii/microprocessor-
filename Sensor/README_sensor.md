
# گزارش کار پروژه کنترل LED با سنسور آنالوگ

## توضیح کلی پروژه
این پروژه با استفاده از یک سنسور آنالوگ متصل به پین A0 و یک LED متصل به پین دیجیتال 13، یک سیستم کنترلی پیاده‌سازی می‌کند. هدف پروژه این است که بر اساس مقدار خوانده شده از سنسور، LED را روشن یا خاموش کند.

## توضیح کد

### تعریف متغیرها
- `sensor`: متغیری برای ذخیره مقدار خوانده شده از سنسور آنالوگ.
- `led`: شماره پین متصل به LED (پین 13).

### تابع `setup`
- در این بخش، ارتباط سریال با سرعت 9600 بیت در ثانیه شروع می‌شود.
- پین مربوط به LED به عنوان خروجی تنظیم می‌شود.

### تابع `loop`
1. **خواندن مقدار سنسور**: مقدار خوانده شده از پین A0 در متغیر `sensor` ذخیره می‌شود.
2. **چاپ مقدار سنسور**: مقدار خوانده شده به کمک `Serial.print` و `Serial.println` در مانیتور سریال نمایش داده می‌شود.
3. **کنترل LED**: اگر مقدار سنسور بیش از 800 باشد، LED خاموش می‌شود؛ در غیر این صورت، LED روشن می‌شود.
4. **تاخیر**: یک تاخیر 300 میلی‌ثانیه‌ای برای جلوگیری از خواندن سریع و مداوم سنسور تنظیم شده است.

## راه‌اندازی پروژه
1. کد را در نرم‌افزار Arduino IDE کپی کرده و آپلود کنید.
2. یک سنسور آنالوگ مانند فوتوسل یا پتانسیومتر را به پین A0 متصل کنید.
3. LED به پین 13 متصل شود.
4. مقدار سنسور را از طریق Serial Monitor بررسی کنید و تغییرات LED را مشاهده نمایید.

## نکات اضافی
- در این پروژه از led خود برد استفاده شده است در تصوری مشخص شده است

![pic1](https://github.com/user-attachments/assets/60827808-e020-49c0-b38b-a4cb85433532)
![pic2](https://github.com/user-attachments/assets/73b59187-bb24-4c05-b342-03474fe8d463)
