
# گزارش کار پروژه نمایش اعداد روی سون سگمنت

## توضیح کلی پروژه
در این پروژه، هدف نمایش اعداد ۰ تا ۹ بر روی سون سگمنت با استفاده از یک آرایه‌ی دو‌بعدی است که وضعیت هر بخش از سون سگمنت را به صورت مقادیر `0` و `1` در خود نگه می‌دارد. به ازای هر عدد، یک ردیف از آرایه مشخص می‌کند کدام یک از بخش‌های سون سگمنت روشن یا خاموش باشد.

## توضیح کد

### آرایه‌ی `sequence`
آرایه‌ی `sequence` یک آرایه‌ی دوبعدی است که هر سطر آن مربوط به نمایش یکی از اعداد ۰ تا ۹ بر روی سون سگمنت است. هر ستون نشان‌دهنده‌ی وضعیت یکی از بخش‌های سون سگمنت می‌باشد:

- مقدار `1` به معنی روشن بودن بخش
- مقدار `0` به معنی خاموش بودن بخش

### تابع `printNumber`
تابع `printNumber` با گرفتن یک عدد به عنوان ورودی، با استفاده از مقادیر آرایه `sequence`، وضعیت پین‌های مربوطه را تنظیم می‌کند تا عدد مورد نظر روی سون سگمنت نمایش داده شود.

### تابع `setup`
در تابع `setup`، تمام پین‌های مورد نیاز به عنوان خروجی تنظیم می‌شوند. پین‌های `0` تا `7` به عنوان خروجی تعریف می‌شوند.

### تابع `loop`
در حلقه‌ی `loop`، اعداد ۰ تا ۹ به صورت پیوسته و با تاخیر یک ثانیه‌ای بر روی سون سگمنت نمایش داده می‌شوند. این بخش باعث می‌شود که نمایشگر اعداد را به ترتیب و به مدت یک ثانیه نشان دهد.

## راه‌اندازی پروژه
1. کد را در نرم‌افزار Arduino IDE کپی کرده و آپلود کنید.
2. مطمئن شوید که پین‌های مناسب به سون سگمنت متصل شده‌اند.
3. پس از آپلود، نمایشگر اعداد را از ۰ تا ۹ نشان خواهد داد و این فرایند را تکرار خواهد کرد.

## نکات اضافی
- در صورت نیاز می‌توان تاخیر را برای نمایش سریع‌تر یا کندتر تنظیم کرد.

- آرایه‌ی `sequence` قابلیت تغییر دارد و می‌توان آن را برای سایر الگوهای نمایش استفاده کرد.
![pic1](https://github.com/user-attachments/assets/a4f84ba9-89c8-4e01-91a1-d6880dd65122)


![pic2](https://github.com/user-attachments/assets/cc82923a-6ab3-4afa-821e-d72988ecbfb5)

