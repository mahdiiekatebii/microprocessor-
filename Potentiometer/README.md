# گزارش کار پروژه کنترل روشنایی LED با پتانسیومتر

## توضیح کلی پروژه
این پروژه به شما امکان می‌دهد با استفاده از یک پتانسیومتر (potentiometer)، روشنایی یک LED را کنترل کنید. مقدار مقاومت پتانسیومتر توسط آردوینو خوانده می‌شود و این مقدار برای تنظیم میزان روشنایی LED استفاده می‌شود.

## توضیح کد

### پین‌ها و متغیرها
- `ledPin`: پایه‌ای که LED به آن متصل است (پایه 9).
- `potPin`: پایه‌ای که پتانسیومتر به آن متصل است (پایه A0).
- `potvalue`: متغیری برای ذخیره‌سازی مقدار خوانده شده از پتانسیومتر.

### تنظیمات در تابع `setup`
- پایه `ledPin` به عنوان خروجی تنظیم می‌شود تا LED بتواند روشن و خاموش شود.

### حلقه `loop`
1. **خواندن مقدار پتانسیومتر**: با استفاده از `analogRead(potPin)`، مقدار آنالوگ پتانسیومتر (بین 0 تا 1023) خوانده می‌شود و در متغیر `potvalue` ذخیره می‌شود.
2. **تنظیم روشنایی LED**: مقدار `potvalue` به کمک تابع `map` به یک مقدار بین 0 تا 255 تبدیل می‌شود و سپس این مقدار به کمک `analogWrite` به `ledPin` ارسال می‌شود تا روشنایی LED تنظیم گردد.
3. **تاخیر کوتاه**: تاخیر 10 میلی‌ثانیه‌ای برای جلوگیری از تغییرات ناگهانی و سریع در روشنایی LED اضافه شده است.

## راه‌اندازی پروژه
1. کد را در نرم‌افزار Arduino IDE کپی کرده و به آردوینو آپلود کنید.
2. مدار را به گونه‌ای بسازید که پتانسیومتر به پایه `A0` و LED به پایه `9` متصل باشد.
3. با چرخاندن پتانسیومتر، روشنایی LED تغییر خواهد کرد.

## نکات اضافی
- با تغییر مقدار `delay(10)` می‌توانید سرعت واکنش LED به تغییرات پتانسیومتر را تنظیم کنید.
- از یک مقاومت مناسب برای LED استفاده کنید تا جریان اضافی به آن وارد نشود و آسیب نبیند.
- ![pic1](https://github.com/user-attachments/assets/52bc6e22-359b-43db-9a3f-4438c921133c)
![pic2](https://github.com/user-attachments/assets/4a1e44d7-9008-439d-9b9d-22d47c97c0e7)

