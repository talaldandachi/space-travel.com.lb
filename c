<!DOCTYPE html>
<html lang="ar" dir="rtl">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1" />
  <title>Space Travel - مكتب سفر وسياحة</title>
  <link href="https://fonts.googleapis.com/css2?family=Cairo&display=swap" rel="stylesheet" />
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css"/>

  <style>
    * {margin: 0; padding: 0; box-sizing: border-box; font-family: 'Cairo', sans-serif;}
    body {background: #fff; color: #004aad; line-height: 1.6;}
    a {color: inherit; text-decoration: none;}
    ul {list-style: none;}
    button {cursor: pointer; border: none; background: none; font-family: inherit;}

    header {
      background-color: #004aad; color: white; padding: 15px 20px;
      display: flex; align-items: center; justify-content: space-between; flex-wrap: wrap;
    }
    .logo {display: flex; align-items: center; gap: 12px;}
    .logo img {height: 50px; width: auto;}
    .logo h1 {font-size: 1.8rem; font-weight: 700;}
    nav.main-nav {display: flex; gap: 20px; flex-wrap: wrap;}
    nav.main-nav a {
      color: white; font-weight: 600; padding: 8px 15px;
      border-radius: 5px; transition: background-color 0.3s ease;
    }
    nav.main-nav a:hover {background-color: #003080;}
    .lang-switch {
      background-color: white; color: #004aad;
      padding: 6px 12px; font-weight: 700; border-radius: 4px;
    }
    .lang-switch:hover {background-color: #cce0ff;}

    .hero {
      background: url('king.jpg') center/cover no-repeat;
      min-height: 300px; display: flex; align-items: center; justify-content: center;
      text-align: center; color: white; padding: 20px; position: relative; border-radius: 6px;
    }
    .hero::after {
      content: ""; position: absolute; inset: 0; background: rgba(0, 74, 173, 0.6);
      z-index: 0; border-radius: 6px;
    }
    .hero-content {position: relative; z-index: 1; max-width: 900px;}
    .hero-content h2 {font-size: 2.2rem; margin-bottom: 15px;}
    .hero-content p {font-size: 1.2rem;}

    main {max-width: 1100px; margin: 40px auto; padding: 0 15px;}
    section {margin-bottom: 50px;}
    section h3 {
      color: #004aad; border-bottom: 3px solid #004aad;
      display: inline-block; padding-bottom: 6px; margin-bottom: 20px;
      font-size: 1.6rem;
    }
    section p {font-size: 1.1rem; margin-bottom: 15px;}

    .services {
      display: flex; flex-wrap: wrap; gap: 18px; justify-content: center;
    }
    .service-item {
      background-color: #e6f0ff; border: 2px solid #004aad;
      border-radius: 8px; flex: 1 1 140px; max-width: 200px;
      padding: 15px; font-weight: 700; text-align: center; cursor: pointer;
      transition: background-color 0.3s, color 0.3s; position: relative;
    }
    .service-item:hover {background-color: #004aad; color: white;}

    #tourism-submenu {
      position: absolute; top: 100%; right: 0; background: #e6f0ff;
      border: 2px solid #004aad; border-radius: 8px;
      margin-top: 6px; min-width: 180px; z-index: 10; padding: 10px 0;
      display: none;
    }
    .service-subitem {
      padding: 10px 20px; cursor: pointer; color: #004aad;
      font-weight: 600; transition: background-color 0.3s, color 0.3s;
      text-align: right;
    }
    .service-subitem:hover {background-color: #004aad; color: white;}

    .social {text-align: center; margin-top: 20px;}
    .social a {
      font-size: 30px; color: #004aad; margin: 0 12px;
      transition: color 0.3s;
    }
    .social a:hover {color: #002366;}

    #work-contract-modal {
      display: none; position: fixed; inset: 0; background: rgba(0, 0, 0, 0.5);
      z-index: 9999; justify-content: center; align-items: center;
    }
    #work-contract-modal .modal-content {
      background: #fff; border-radius: 10px; width: 90%; max-width: 400px;
      padding: 20px; box-shadow: 0 0 15px rgba(0,0,0,0.3); position: relative;
    }
    #work-contract-modal h3 {color: #004aad; margin-bottom: 20px; text-align: center;}
    #work-contract-modal form {display: flex; flex-direction: column; gap: 15px;}
    #work-contract-modal input, #work-contract-modal button {
      padding: 10px; border-radius: 6px; font-size: 1rem;
    }
    #work-contract-modal input {border: 1px solid #004aad;}
    #work-contract-modal button {
      background: #004aad; color: white; font-weight: 700;
      transition: background-color 0.3s ease;
    }
    #work-contract-modal button:hover {background-color: #003080;}
    #close-modal {
      position: absolute; top: 10px; left: 10px; background: none;
      border: none; font-size: 1.5rem; color: #004aad;
    }

    @media (max-width: 768px) {
      .services {justify-content: center;}
      header {flex-direction: column; gap: 15px;}
      nav.main-nav {gap: 12px; justify-content: center;}
      .hero-content h2 {font-size: 1.8rem;}
      #tourism-submenu {
        position: static; box-shadow: none; border: none;
        background: transparent; padding: 0; display: flex !important;
        flex-direction: column;
      }
      .service-subitem {padding: 8px 0;}
      .service-item {max-width: none; flex: 1 1 45%;}
    }
  </style>
</head>
<body>

<header>
  <div class="logo">
    <img src="logo.JPG" alt="Logo" />
    <h1 id="site-title">Space Travel</h1>
  </div>
  <nav class="main-nav">
    <a href="#" id="nav-home">الرئيسية</a>
    <a href="#" id="nav-services">خدماتنا</a>
    <a href="#" id="nav-contact">تواصل معنا</a>
    <button class="lang-switch" onclick="setLang(currentLang === 'ar' ? 'en' : 'ar')" id="btn-lang-switch">English</button>
  </nav>
</header>

<div class="hero">
  <div class="hero-content">
    <h2 id="welcome-title">مرحبًا بكم في Space Travel – حيث تبدأ رحلتكم إلى العالم!</h2>
    <p id="welcome-text">
      نحن هنا لنحقق أحلامكم بالسفر وننقلكم إلى وجهاتكم المفضلة بكل راحة وسهولة.
      اكتشفوا معنا أروع المغامرات، واستمتعوا بعروضنا الحصرية وخدمتنا المميزة.
    </p>
  </div>
</div>

<main>
  <section>
    <h3 id="about-title">تعريف بالشركة</h3>
    <p id="about-text">
      Space Travel هو مكتب سفر وسياحة رائد يقدم خدمات متكاملة لعشاق الترحال والاستكشاف...
    </p>
  </section>

  <section>
    <h3 id="services-title">خدماتنا</h3>
    <div class="services">
      <div class="service-item" id="tourism-btn">
        <span id="service-tourism-text">السياحة</span>
        <div id="tourism-submenu">
          <div class="service-subitem" onclick="openWhatsApp('تركيا')">تركيا</div>
          <div class="service-subitem" onclick="openWhatsApp('شمال تركيا')">شمال تركيا</div>
          <div class="service-subitem" onclick="openWhatsApp('أنطاليا')">أنطاليا</div>
          <div class="service-subitem" onclick="openWhatsApp('طرابزون')">طرابزون</div>
        </div>
      </div>
      <div class="service-item" onclick="openWhatsApp('الفيز')">الفيز</div>
      <div class="service-item" onclick="openWhatsApp('الزيارات الجماعية')">الزيارات الجماعية</div>
      <div class="service-item" id="work-contract-btn">عقود العمل</div>
      <div class="service-item" onclick="openWhatsApp('العمرة')">العمرة</div>
      <div class="service-item" onclick="openWhatsApp('الحج')">الحج</div>
      <div class="service-item" onclick="openWhatsApp('داتا فلو')">داتا فلو</div>
      <div class="service-item" onclick="openWhatsApp('ممارس بلاس')">ممارس بلاس</div>
    </div>
  </section>

  <section class="social">
    <a href="https://wa.me/96176484657" target="_blank"><i class="fab fa-whatsapp"></i></a>
    <a href="https://www.instagram.com/space.travel.lb" target="_blank"><i class="fab fa-instagram"></i></a>
    <a href="https://www.tiktok.com/@spacetravel.lb"><i class="fab fa-tiktok"></i></a>
    <a href="https://www.facebook.com/space travel lb"><i class="fab fa-facebook"></i></a>
  </section>
</main>

<div id="work-contract-modal">
  <div class="modal-content">
    <button id="close-modal">×</button>
    <h3>عقود العمل - Space Travel</h3>
    <form id="work-contract-form">
      <input type="text" placeholder="الاسم الكامل" required />
      <input type="tel" placeholder="رقم الهاتف" required />
      <input type="email" placeholder="البريد الإلكتروني" required />
      <input type="file" accept=".pdf,.doc,.docx" required />
      <button type="submit">إرسال</button>
    </form>
  </div>
</div>

<script>
  const whatsappNumber = "96476484657";
  let currentLang = "ar";

  const translations = {
    ar: {
      "site-title": "Space Travel", "nav-home": "الرئيسية",
      "nav-services": "خدماتنا", "nav-contact": "تواصل معنا",
      "btn-lang-switch": "English",
      "welcome-title": "مرحبًا بكم في Space Travel – حيث تبدأ رحلتكم إلى العالم!",
      "welcome-text": "نحن هنا لنحقق أحلامكم بالسفر وننقلكم إلى وجهاتكم...",
      "about-title": "تعريف بالشركة",
      "about-text": "Space Travel هو مكتب سفر وسياحة رائد يقدم خدمات متكاملة لعشاق الترحال...",
      "services-title": "خدماتنا",
    },
    en: {
      "site-title": "Space Travel", "nav-home": "Home",
      "nav-services": "Services", "nav-contact": "Contact",
      "btn-lang-switch": "العربية",
      "welcome-title": "Welcome to Space Travel – Your Journey Begins Here!",
      "welcome-text": "We are here to make your travel dreams come true...",
      "about-title": "About Us",
      "about-text": "Space Travel is a leading travel agency offering full travel services...",
      "services-title": "Our Services",
    }
  };

  function setLang(lang) {
    currentLang = lang;
    const texts = translations[lang];
    for (const id in texts) {
      const el = document.getElementById(id);
      if (el) el.textContent = texts[id];
    }
    document.documentElement.lang = lang;
    document.documentElement.dir = lang === "ar" ? "rtl" : "ltr";
  }

  function openWhatsApp(service) {
    window.open(`https://wa.me/${whatsappNumber}?text=مرحبًا، أود الاستفسار عن: ${service}`, '_blank');
  }

  window.onload = () => {
    setLang("ar");
    document.getElementById("tourism-btn").onclick = () => {
      const submenu = document.getElementById("tourism-submenu");
      submenu.style.display = submenu.style.display === "none" ? "block" : "none";
    };
    document.getElementById("work-contract-btn").onclick = () => {
      document.getElementById("work-contract-modal").style.display = "flex";
    };
    document.getElementById("close-modal").onclick = () => {
      document.getElementById("work-contract-modal").style.display = "none";
    };
    document.getElementById("work-contract-form").onsubmit = (e) => {
      e.preventDefault();
      alert("تم إرسال بياناتك بنجاح!");
      document.getElementById("work-contract-modal").style.display = "none";
    };
  };
</script>

</body>
</html>