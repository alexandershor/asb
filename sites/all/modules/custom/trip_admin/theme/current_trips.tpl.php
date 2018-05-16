
<script src="//unpkg.com/tippy.js@2.5.2/dist/tippy.all.min.js"></script>
<link rel="stylesheet" href="//unpkg.com/tippy.js@2.5.2/dist/tippy.css">
<link type="text/css" rel="stylesheet" href="//cdnjs.cloudflare.com/ajax/libs/qtip2/3.0.3/jquery.qtip.min.css" media="all" />
<script type="text/javascript" src="//cdnjs.cloudflare.com/ajax/libs/qtip2/3.0.3/jquery.qtip.min.js"></script>

<?php
$path = current_path();
$n = 3;
foreach ($trips as $trip) {
  if(!empty($trip['pref'])){
    $n--;
  }
}
?>
<style>
  .qtip.my-qtip {
    max-width: none;
    width: 800px;
  }
</style>
<script>
  jQuery( document ).ready(function( $ ) {
    var n = $('.ttp').length;
    var i = 0;
    var my = 'top center';
    var at = 'bottom center';
    $('.ttp').each(function() {
      i++;
      if(i == n) {
        my = 'bottom center';
        at = 'top center';
      }
      $(this).qtip({
        content: {
          text: $(this).next('.tooltiptext')
        },
        position: {
          target: 'event',

          my: my,
          at: at
        },
        style: {
          classes: 'qtip-bootstrap qtip-blue qtip-shadow my-qtip'
        }
      });
    });

  });
</script>
<table>
<?php
foreach ($trips as $trip){
  $id = $trip['nid'];
  ?>
  <tr>
    <td>
      <div  class="ttp" style="width:100%">
        <a href="../../node/<?php print $trip['nid'];?>"><?php print $trip['title'];?></a>
      </div>

      <div class="tooltiptext" style="display: none;">
        <?php print $trip['trip_description'];?>
      </div>
    </td>
    <td>
      <?php print $trip['trip_location'];?>
    </td>

    <td>
      <?php if(empty($trip['pref'])){
        if($n > 0) {
          ?>
          <a class="btn" href="../../node/add/trip-application?field_tripapp_appro=<?php print $app_pro->nid;?>&field_tripapp_trip=<?php print $trip['nid'];?>&destination=<?php print $path;?>">Apply</a>
          <?php
        }
      } else {?>
        Applied (#<?php print $trip['pref'];?>)
      <?php }?>
    </td>
  </tr>

 <?php
}
?>
</table>
