// Optional JavaScript for image loading optimization
document.addEventListener('DOMContentLoaded', function() {
    const images = document.querySelectorAll('.post-image');
    
    images.forEach(img => {
        img.addEventListener('load', function() {
            this.classList.add('loaded');
        });
    });
});
