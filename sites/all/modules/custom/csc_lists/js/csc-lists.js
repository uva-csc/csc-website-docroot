(function($) {
  $(function(){
    $('#audience-filter').on('click', 'a', function(event){
      event.preventDefault();
      document.getElementById('audience-input').value = event.target.getAttribute('data-value');
      document.getElementById('csc-list-form').submit();
      return false;
    });
  });
})(jQuery);
