$('.owl-carousel').owlCarousel({
    loop:true,
    margin:10,
    nav:true,
    dots:false,
    // autoplay: true,
    autoplayTimeout: 1000,
    autoplayHoverPause: true,
    navText: ['<i class="fa-solid fa-arrow-left-long nav-arrows"></i>', '<i class="fa-solid fa-arrow-right-long nav-arrows"></i>'],
    responsive:{
        0:{
            items:1
        },
        600:{
            items:3
        }
        // 1000:{
        //     items:5
        // }
    }
})

AOS.init();