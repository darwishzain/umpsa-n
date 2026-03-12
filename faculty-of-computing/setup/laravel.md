## Reference
- [https://laravel.com/docs/12.x](https://laravel.com/docs/12.x)
- [https://laracasts.com/](https://laracasts.com/)

## Linux
### Using PHP from LAMPP
#### Linking PHP and Installing Composer
1. Check if LAMPP has PHP
`/opt/lampp/bin/php -v`
2. Create a symlink for `/opt/lampp/bin/php` into `/usr/local/bin/php`
`sudo ln -s /opt/lampp/bin/php /usr/local/bin/php`
3. Check PHP
`php -v`
4. INstall Composer
```\
# Download Composer
php -r "copy('https://getcomposer.org/installer', 'composer-setup.php');"
# Install Composer
php composer-setup.php
# Remove Composer installation file
php -r "unlink('composer-setup.php');"
```
5. Make Composer Global
```
# Move and rename Composer
sudo mv composer.phar /usr/local/bin/composer
# Make Composer accessible
sudo chmod +x /usr/local/bin/composer
```

####  Start New Laravel Project
```
# composer create-project laravel/laravel <app name>
composer create-project laravel/laravel my-app
```
#### Launch Laravel Project
`php artisan serve`