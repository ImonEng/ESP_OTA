<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
  <title>Decoria | Handmade Decor</title>
  <style>
    body {
      font-family: sans-serif;
      background: #fafafa;
      margin: 0;
      padding: 0;
      color: #333;
    }
    header {
      background: #222;
      color: #fff;
      padding: 1rem;
      text-align: center;
    }
    .container {
      max-width: 1000px;
      margin: auto;
      padding: 2rem;
    }
    .products {
      display: grid;
      grid-template-columns: repeat(auto-fit, minmax(250px, 1fr));
      gap: 2rem;
    }
    .product {
      background: #fff;
      border-radius: 12px;
      padding: 1rem;
      box-shadow: 0 2px 6px rgba(0,0,0,0.1);
      text-align: center;
    }
    .product img {
      width: 100%;
      border-radius: 8px;
      max-height: 200px;
      object-fit: cover;
    }
    .product h3 {
      margin: 0.5rem 0;
    }
    .product p {
      font-weight: bold;
      color: #555;
    }
    .order-btn {
      display: inline-block;
      margin-top: 0.5rem;
      padding: 0.5rem 1rem;
      background: #25d366;
      color: white;
      text-decoration: none;
      border-radius: 6px;
    }
    footer {
      text-align: center;
      padding: 1rem;
      font-size: 0.8rem;
      color: #888;
    }
  </style>
</head>
<body>
  <header>
    <h1>Decoria</h1>
    <p>Beautiful handmade decor for your space</p>
  </header>
  <div class="container">
    <div class="products">
      <div class="product">
        <img src="https://via.placeholder.com/300x200.png?text=Boho+Wall+Art" alt="Wall Art">
        <h3>Boho Wall Art</h3>
        <p>$25</p>
        <a class="order-btn" href="https://wa.me/1234567890" target="_blank">Order on WhatsApp</a>
      </div>
      <div class="product">
        <img src="https://via.placeholder.com/300x200.png?text=Handmade+Candle" alt="Candle">
        <h3>Handmade Candle</h3>
        <p>$15</p>
        <a class="order-btn" href="https://wa.me/1234567890" target="_blank">Order on WhatsApp</a>
      </div>
      <div class="product">
        <img src="https://via.placeholder.com/300x200.png?text=Decor+Vase" alt="Vase">
        <h3>Decor Vase</h3>
        <p>$20</p>
        <a class="order-btn" href="https://wa.me/1234567890" target="_blank">Order on WhatsApp</a>
      </div>
    </div>
  </div>
  <footer>
    &copy; 2025 Decoria. All rights reserved.
  </footer>
</body>
</html>
