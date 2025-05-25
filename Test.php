<section class="placed-orders">
    <h1 class="heading">placed orders</h1>
    <div class="box-container">
        <?php
   $select_orders = $conn->prepare("SELECT * FROM `orders`");
   $select_orders->execute();
   if ($select_orders->rowCount() > 0) {
      while ($fetch_orders = $select_orders->fetch(PDO::FETCH_ASSOC)) {
         ?>
        <div class="box">
            <p> user id : <span><?= $fetch_orders['user_id']; ?></span> </p>
            <p> placed on : <span><?= $fetch_orders['placed_on']; ?></span> </p>
            <p> name : <span><?= $fetch_orders['name']; ?></span> </p>
            <p> email : <span><?= $fetch_orders['email']; ?></span> </p>
            <p> number : <span><?= $fetch_orders['number']; ?></span> </p>
            <p> address : <span><?= $fetch_orders['address']; ?></span> </p>
            <p> total products : <span><?= $fetch_orders['total_products']; ?></span> </p>
            <p> total price : <span>$<?= $fetch_orders['total_price']; ?>/-</span> </p>
            <p> payment method : <span><?= $fetch_orders['method']; ?></span> </p>
            <form action="" method="POST">
                <input type="hidden" name="order_id" value="<?= $fetch_orders['id']; ?>">
                <select name="payment_status" class="drop-down">
                    <option value="" selected disabled><?= $fetch_orders['payment_status']; ?></option>
                    <option value="pending">pending</option>
                    <option value="completed">completed</option>
                </select>
                <div class="flex-btn">
                    <input type="submit" value="update" class="btn" name="update_payment">
                    <a href="placed_orders.php?delete=<?= $fetch_orders['id']; ?>" class="delete-btn"
                        onclick="return confirm('delete this order?');">delete</a>
                </div>
            </form>
        </div>
        <?php
      }
   }
   ?>
    </div>
</section>