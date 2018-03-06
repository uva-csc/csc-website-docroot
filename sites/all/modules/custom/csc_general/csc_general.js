(function ($) {
    // CSC Calendar behavior to switch views using AJAX.
    Drupal.behaviors.loginlink = {
        attach: function(context, settings) {
            if (context == document) {
                // Move login link to the left bottom of left column. It is defined in page.tpl.php of the theme
                if ($('.csc-login-link').length > 0 && $('.csc-panel-col-left .csc-panel-inside').length > 0 )  {
                    var llink = $('.csc-login-link').detach();
                    $('.csc-panel-col-left .csc-panel-inside').append(llink);
                }
            }
        }
    };
    
    // For News Item list sniff for item's with class alturl if the url is '/node/' then use alt ulr data
    Drupal.behaviors.alturl = {
        attach: function(context, settings) {
            if (context == document) {
                $('a.alturl').each(function() {
                    var href = $(this).attr('href');
                    if (href == '/node/') { $(this).attr('href', $(this).data('alturl')); }
                });
            }
        }
    };
    
    /**
     * Modify the class node new and edit forms
     */
    Drupal.behaviors.classnodeforms = {
        attach: function(context, settings) {
            if (context == document) {
                // For class edit nodes use the stored value from csc_general.module for the repeat rule to determing which box is checked
                // NEVER patch automatically checks that one in all cases
                if ($('body').is('.page-node-edit.node-type-class')) {
                    var rrule = $('input[name=rrule]').val();
                    if (rrule.search(/UNTIL/) > -1) {
                        $('#edit-field-date-und-0-rrule-range-of-repeat-until').attr('checked', 'checked');
                    } else if (rrule.search(/COUNT/) > -1) {
                         $('#edit-field-date-und-0-rrule-range-of-repeat-count').attr('checked', 'checked');
                    } else if (rrule.search(/NEVER/) > -1) {
                        $('#edit-field-date-und-0-rrule-range-of-repeat-never').attr('checked', 'checked');
                    } else {
                        $('#edit-field-date-und-0-rrule-range-of-repeat-until').attr('checked', 'checked');
                    }
                    if ($('.form-item-field-audience-und input[checked=checked]').val() != 'drop-in') {
                        $('#edit-field-date-und-0-rrule-range-of-repeat-never').parent().hide();
                    }
                } else if($('body').is('.page-node-add-class')) {
                    // for new class nodes just set the repeat count one as default
                    $('#edit-field-date-und-0-rrule-range-of-repeat-count').attr('checked', 'checked');
                    $('#edit-field-date-und-0-rrule-range-of-repeat-never').parent().hide();
                }
                
                // Listen to change in class type to show the never option only for classes of type drop-in
                if ($('body').is('.page-node-add-class') || $('body').is('.page-node-edit.node-type-class')) {
                    $('#edit-field-audience-und').on('change', function(ev) {
                        if($(ev.target).val() == 'drop-in') {
                            $('#edit-field-date-und-0-rrule-range-of-repeat-never').parent().show();
                        } else {
                            $('#edit-field-date-und-0-rrule-range-of-repeat-count').attr('checked', 'checked');
                            $('#edit-field-date-und-0-rrule-range-of-repeat-never').parent().hide();
                        }
                    });
                }
            }
        }
    };
}) (jQuery);
