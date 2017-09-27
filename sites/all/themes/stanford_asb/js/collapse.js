(function ($) {
          $(document).ready(function() {
          $('.question-answer').hide();  
          $('.collapse').click(function(event) {
            event.preventDefault();
            var current = $(this).html();
            if (current == '+') {
              $(this).html('-');
            }
            else {
              $(this).html('+');
            }
            $(this).closest('.questions-container').find('.question-answer').slideToggle("fast, linear");
          })
      });
  })(jQuery);