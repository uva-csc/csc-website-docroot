(function($) {
    $(function(){
        $('#audience-filter').on('click', 'a', function(event){
            event.preventDefault();
            document.getElementById('audience-input').value = event.target.getAttribute('data-value');
            document.getElementById('csc-list-form').submit();
            return false;
        });
        if (window.location.pathname == '/list/class') {
            var ctype = $('.list-filter-wrapper a.selected').text();
            $('p.tbap').prepend(ctype + ' ');
        }
    });
})(jQuery);
