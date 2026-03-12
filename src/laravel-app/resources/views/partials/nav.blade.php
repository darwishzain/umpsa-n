<nav class="main-nav">
    <div class="nav-container">
        <a href="{{ url('/') }}" class="brand">{{ config('app.name', 'Laravel') }}</a>
        
        <ul class="nav-links">
            <li><a href="{{ url('/') }}" class="{{ Request::is('/') ? 'active' : '' }}">Home</a></li>
            <li><a href="{{ url('/faculty') }}" class="{{ Request::is('faculty') ? 'active' : '' }}">Faculty</a></li>
            <li><a href="{{ url('/about') }}" class="{{ Request::is('about') ? 'active' : '' }}">About</a></li>
            <li><a href="{{ url('/contact') }}" class="{{ Request::is('contact') ? 'active' : '' }}">Contact</a></li>
        </ul>
    </div>
</nav>