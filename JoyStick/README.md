# گزارش کار: خواندن داده‌های جوی‌استیک با استفاده از آردوینو

## شرح پروژه
در این پروژه، از آردوینو برای خواندن داده‌های جوی‌استیک استفاده شده است. جوی‌استیک دارای سه خروجی است:
1. خروجی دیجیتال برای کلید فشار (Switch)
2. خروجی آنالوگ برای محور X
3. خروجی آنالوگ برای محور Y

اطلاعات این خروجی‌ها توسط آردوینو دریافت شده و به صورت سریال در مانیتور سریال نمایش داده می‌شود.

---

## اجزای مورد نیاز
- آردوینو (مانند Arduino Uno)
- ماژول جوی‌استیک
- سیم‌های جامپر
- کابل USB برای اتصال آردوینو به کامپیوتر

---

## توضیح کد
### متغیرها:
- `SW_pin`: پین دیجیتال متصل به خروجی کلید جوی‌استیک.
- `X_pin`: پین آنالوگ متصل به محور X جوی‌استیک.
- `Y_pin`: پین آنالوگ متصل به محور Y جوی‌استیک.

### توابع اصلی:
1. `setup()`:
   - تنظیم پین دیجیتال به عنوان ورودی.
   - فعال‌سازی مقاومت پول‌آپ داخلی برای پین سوئیچ.
   - مقداردهی اولیه ارتباط سریال.

2. `loop()`:
   - خواندن وضعیت کلید جوی‌استیک با استفاده از `digitalRead`.
   - خواندن مقدار محورهای X و Y با استفاده از `analogRead`.
   - ارسال مقادیر خوانده شده به مانیتور سریال.

---

## نحوه اتصال
1. خروجی سوئیچ جوی‌استیک به پین دیجیتال 8 آردوینو متصل شود.
2. خروجی محور X جوی‌استیک به پین آنالوگ A0 آردوینو متصل شود.
3. خروجی محور Y جوی‌استیک به پین آنالوگ A1 آردوینو متصل شود.
4. GND جوی‌استیک به GND آردوینو متصل شود.
5. VCC جوی‌استیک به پین 5V آردوینو متصل شود.

---

## خروجی سریال
در مانیتور سریال، اطلاعات زیر نمایش داده می‌شود:
- وضعیت کلید جوی‌استیک (فشار داده شده یا آزاد).
- مقادیر محور X و Y جوی‌استیک.

