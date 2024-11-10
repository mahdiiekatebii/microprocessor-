# گزارش کار پروژه نمایش اعداد روی سون سگمنت با استفاده از کتابخانه SevSeg

## توضیح کلی پروژه
این پروژه با استفاده از کتابخانه `SevSeg` و یک نمایشگر سون سگمنت تک‌رقمی، اعداد ۰ تا ۹ را نمایش می‌دهد. این پروژه به ما کمک می‌کند که به راحتی اعداد را بر روی سون سگمنت نمایش دهیم.

## توضیح کد

### کتابخانه SevSeg
کتابخانه `SevSeg` کتابخانه‌ای برای کنترل نمایشگرهای سون سگمنت با آردوینو است که به ساده‌تر شدن کد و تنظیمات نمایشگر کمک می‌کند.

### تنظیمات در تابع `setup`

1. تعداد دیجیت‌ها از آنجا که ما یک نمایشگر تک‌رقمی داریم، `numDigits` برابر با 1 تنظیم شده است.
2. پین‌های سگمنت پین‌های A تا DP از نمایشگر به ترتیب در آرایه `segmentPins` تعریف شده‌اند.
3. مقاومت‌ها مقدار `resistorsOnSegments` روی `true` تنظیم شده است که به معنی وجود مقاومت‌ها بر روی سگمنت‌ها است.
4. تعریف نوع نمایشگر با استفاده از تابع `sevseg.begin()` نوع نمایشگر به صورت `COMMON_ANODE` یا `COMMON_CATHODE` مشخص می‌شود. در این کد از نوع `COMMON_ANODE` استفاده شده است.
5. تنظیم روشنایی با `sevseg.setBrightness(90)`، روشنایی نمایشگر تنظیم می‌شود.

### بخش `loop`
در این بخش، اعداد ۰ تا ۹ به ترتیب و با تاخیر ۲ ثانیه‌ای روی نمایشگر نشان داده می‌شوند

- تابع `setNumber(i)` برای تنظیم عدد مورد نمایش استفاده می‌شود.
- تابع `refreshDisplay()` نمایش عدد را تازه‌سازی می‌کند و آن را روی نمایشگر نشان می‌دهد.
- با تاخیر ۲ ثانیه‌ای، اعداد یکی‌یکی روی نمایشگر نمایش داده می‌شوند.

## راه‌اندازی پروژه
1. کد را در نرم‌افزار Arduino IDE کپی کرده و آپلود کنید.
2. مطمئن شوید که پین‌ها را به درستی به نمایشگر سون سگمنت متصل کرده‌اید.
3. پس از آپلود، نمایشگر اعداد ۰ تا ۹ را یکی‌یکی نمایش می‌دهد.

## نکات اضافی
- برای تغییر روشنایی، مقدار `setBrightness` را تغییر دهید.
- در صورت استفاده از نمایشگرهای چندرقمی، می‌توانید تنظیمات را به صورت دلخواه تغییر دهید و تعداد دیجیت‌ها و پین‌ها را تنظیم کنید.
- از دستور `COMMON_CATHODE` استفاده کنید اگر نمایشگر شما از نوع کاتد مشترک است.