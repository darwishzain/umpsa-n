<!DOCTYPE html>
@vite('resources/css/app.css')
<html>
<head>
    <title>{{ config('app.name', 'Laravel') }}</title>
</head>
<body>

    @include('partials.nav')  <main>
    @yield('content')     </main>


</html>